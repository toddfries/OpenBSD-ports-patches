# $OpenBSD: Makefile,v 1.2 2013/11/02 20:32:49 sthen Exp $

COMMENT=	tool for reverse-engineering and analysing firmware blobs

MODPY_EGG_VERSION = 1.2.2_1
DISTNAME=	binwalk-1.2.2-1
PKGNAME=	binwalk-1.2.2.1

CATEGORIES=	sysutils

HOMEPAGE=	http://code.google.com/p/binwalk/

MAINTAINER=	Stuart Henderson <sthen@openbsd.org>

# MIT
PERMIT_PACKAGE_CDROM=	Yes

MASTER_SITES=	http://binwalk.googlecode.com/files/

MODULES=	lang/python
BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	devel/py-libmagic \
		graphics/py-matplotlib

NO_TEST=	Yes

WRKSRC=		${WRKDIST}/src

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/binwalk
	${INSTALL_DATA} ${WRKDIST}/docs/* ${PREFIX}/share/doc/binwalk/

.include <bsd.port.mk>
