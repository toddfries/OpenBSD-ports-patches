# $OpenBSD: Makefile,v 1.7 2013/03/21 08:48:55 ajacoutot Exp $

COMMENT =		keep X clipboard and cutbuffer in sync

DISTNAME =		autocutsel-0.9.0
REVISION =		1

CATEGORIES =		x11

HOMEPAGE =		http://www.nongnu.org/autocutsel/

MAINTAINER =		Martynas Venckus <martynas@openbsd.org>

# GPLv2+
PERMIT_PACKAGE_CDROM =	Yes

WANTLIB =		ICE SM X11 Xau Xaw Xdmcp Xext Xmu Xt c \
			pthread-stubs xcb Xpm

MASTER_SITES =		${MASTER_SITE_SAVANNAH:=autocutsel/}

CONFIGURE_STYLE =	gnu

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/autocutsel
	${INSTALL_DATA} ${WRKSRC}/README ${PREFIX}/share/doc/autocutsel

.include <bsd.port.mk>
