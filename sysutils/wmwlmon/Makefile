# $OpenBSD: Makefile,v 1.13 2013/03/11 11:41:33 espie Exp $

COMMENT=		wm-dockapp; wireless interface monitor

DISTNAME=		wmwlmon-1.0
REVISION =		0
CATEGORIES=		sysutils x11 x11/windowmaker
MASTER_SITES=		http://www.nazgul.ch/dev/

HOMEPAGE=		http://www.nazgul.ch/dev.html

MAINTAINER=		Marcus Glocker <marcus@nazgul.ch>

# BSD
PERMIT_PACKAGE_CDROM=	Yes
WANTLIB=		X11 Xext Xpm c m pthread-stubs xcb

USE_GROFF =		Yes
NO_TEST=		Yes

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/wmwlmon ${PREFIX}/bin/wmwlmon
	${INSTALL_MAN} ${WRKSRC}/wmwlmon.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
