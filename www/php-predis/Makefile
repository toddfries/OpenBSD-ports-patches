# $OpenBSD: Makefile,v 1.20 2014/01/22 11:30:10 dcoppa Exp $

COMMENT =		PHP client library for the Redis key-value database

DISTNAME =		Predis-0.8.5
PKGNAME =		${DISTNAME:S/^P/php-p/}
CATEGORIES =		www databases

HOMEPAGE =		http://wiki.github.com/nrk/predis

MAINTAINER =		David Coppa <dcoppa@openbsd.org>

# MIT
PERMIT_PACKAGE_CDROM =	Yes

MASTER_SITES =		http://pear.nrk.io/get/
EXTRACT_SUFX =		.tgz

MODULES =		lang/php

NO_BUILD =		Yes
NO_TEST =		Yes
PKG_ARCH =		*

PREFIX =	${VARBASE}/www
INSTDIR =		${PREFIX}/pear/lib/
SUBST_VARS =		INSTDIR

do-install:
	${INSTALL_DATA_DIR} ${INSTDIR}
	cp -Rp ${WRKSRC}/lib/Predis ${INSTDIR}
	chown -R ${SHAREOWN}:${SHAREGRP} ${INSTDIR}

.include <bsd.port.mk>
