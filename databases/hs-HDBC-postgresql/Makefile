# $OpenBSD: Makefile,v 1.6 2011/05/03 18:44:51 jasper Exp $

COMMENT=		postgresql driver for HDBC

DISTNAME=		HDBC-postgresql-2.2.3.3
CATEGORIES=		databases

HOMEPAGE=		http://software.complete.org/hdbc-postgresql

MAINTAINER=		Jasper Lievisse Adriaanse <jasper@openbsd.org>

# LGPLv2.1
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

MODULES=		lang/ghc

MODGHC_BUILD=		cabal hackage haddock register

RUN_DEPENDS +=		databases/hs-HDBC \
			databases/postgresql \
			devel/hs-mtl \
			devel/hs-parsec
BUILD_DEPENDS +=	${RUN_DEPENDS}

.include <bsd.port.mk>