# $OpenBSD: Makefile,v 1.7 2013/03/11 10:50:25 espie Exp $

COMMENT =		extend python objects with addons

MODPY_EGG_VERSION =	0.7
DISTNAME =		AddOns-${MODPY_EGG_VERSION}
PKGNAME =		py-addons-${MODPY_EGG_VERSION}

CATEGORIES =		devel

HOMEPAGE =		http://pypi.python.org/pypi/AddOns

MAINTAINER =		Martynas Venckus <martynas@openbsd.org>

# PSF or ZPL
PERMIT_PACKAGE_CDROM =	Yes

MASTER_SITES =		${MASTER_SITE_PYPI:=A/AddOns/}
EXTRACT_SUFX =		.zip
UNZIP =			unzip -a

MODULES =		lang/python
RUN_DEPENDS =		devel/py-decoratortools
BUILD_DEPENDS =		${RUN_DEPENDS}

MODPY_SETUPTOOLS =	Yes

post-extract:
	@find ${WRKSRC} -type f -exec chmod 644 {} \;

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/py-addons
	${INSTALL_DATA} ${WRKSRC}/README.txt ${PREFIX}/share/doc/py-addons/

.include <bsd.port.mk>
