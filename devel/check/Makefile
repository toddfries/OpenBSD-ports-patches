# $OpenBSD: Makefile,v 1.11 2014/03/27 06:55:57 ajacoutot Exp $

COMMENT =	unit test framework for C programs

DISTNAME =	check-0.9.12
SHARED_LIBS +=  check                3.0      # unknown
REVISION =	0

CATEGORIES =	devel

HOMEPAGE =	http://check.sf.net/

# LGPLv2.1
PERMIT_PACKAGE_CDROM =	Yes

WANTLIB += m pthread

MASTER_SITES =	${MASTER_SITE_SOURCEFORGE:=check/}


CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS = 	${CONFIGURE_SHARED}

.include <bsd.port.mk>
