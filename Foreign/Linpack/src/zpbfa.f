
Caveat receptor.  (Jack) dongarra@cs.utk.edu, (Eric Grosse) research!ehg
Careful! Anything free comes with no guarantee.
*
*PLEASE NOTE THAT netlib HAS MOVED, THE NEW ADDRESS IS netlib@ornl.gov.
*THE OLD ADDRESS, netlib@mcs.anl.gov, WILL BE TURNED OFF SOON.
*
*** from netlib, Tue Sep 11 13:50:47 EDT 1990 ***
      subroutine zpbfa(abd,lda,n,m,info)
      integer lda,n,m,info
      complex*16 abd(lda,1)
c
c     zpbfa factors a complex*16 hermitian positive definite matrix
c     stored in band form.
c
c     zpbfa is usually called by zpbco, but it can be called
c     directly with a saving in time if  rcond  is not needed.
c
c     on entry
c
c        abd     complex*16(lda, n)
c                the matrix to be factored.  the columns of the upper
c                triangle are stored in the columns of abd and the
c                diagonals of the upper triangle are stored in the
c                rows of abd .  see the comments below for details.
c
c        lda     integer
c                the leading dimension of the array  abd .
c                lda must be .ge. m + 1 .
c
c        n       integer
c                the order of the matrix  a .
c
c        m       integer
c                the number of diagonals above the main diagonal.
c                0 .le. m .lt. n .
c
c     on return
c
c        abd     an upper triangular matrix  r , stored in band
c                form, so that  a = ctrans(r)*r .
c
c        info    integer
c                = 0  for normal return.
c                = k  if the leading minor of order  k  is not
c                     positive definite.
c
c     band storage
c
c           if  a  is a hermitian positive definite band matrix,
c           the following program segment will set up the input.
c
c                   m = (band width above diagonal)
c                   do 20 j = 1, n
c                      i1 = max0(1, j-m)
c                      do 10 i = i1, j
c                         k = i-j+m+1
c                         abd(k,j) = a(i,j)
c                10    continue
c                20 continue
c
c     linpack.  this version dated 08/14/78 .
c     cleve moler, university of new mexico, argonne national lab.
c
c     subroutines and functions
c
c     blas zdotc
c     fortran dcmplx,dconjg,max0,dsqrt
c
c     internal variables
c
      complex*16 zdotc,t
      double precision s
      integer ik,j,jk,k,mu
      double precision dreal,dimag
      complex*16 zdumr,zdumi
      dreal(zdumr) = zdumr
      dimag(zdumi) = (0.0d0,-1.0d0)*zdumi
c     begin block with ...exits to 40
c
c
         do 30 j = 1, n
            info = j
            s = 0.0d0
            ik = m + 1
            jk = max0(j-m,1)
            mu = max0(m+2-j,1)
            if (m .lt. mu) go to 20
            do 10 k = mu, m
               t = abd(k,j) - zdotc(k-mu,abd(ik,jk),1,abd(mu,j),1)
               t = t/abd(m+1,jk)
               abd(k,j) = t
               s = s + dreal(t*dconjg(t))
               ik = ik - 1
               jk = jk + 1
   10       continue
   20       continue
            s = dreal(abd(m+1,j)) - s
c     ......exit
            if (s .le. 0.0d0 .or. dimag(abd(m+1,j)) .ne. 0.0d0)
     *         go to 40
            abd(m+1,j) = dcmplx(dsqrt(s),0.0d0)
   30    continue
         info = 0
   40 continue
      return
      end
