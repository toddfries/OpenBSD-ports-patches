# $OpenBSD: Makefile,v 1.2 2013/05/08 02:03:11 jturner Exp $

COMMENT =		fast Qt IMAP e-mail client

DISTNAME =		trojita-0.3.93
CATEGORIES =		mail x11

MAINTAINER =		James Turner <james@calminferno.net>

HOMEPAGE =		http://trojita.flaska.net/
MASTER_SITES =		${MASTER_SITE_SOURCEFORGE:=trojita/}
EXTRACT_SUFX =		.tar.bz2

# GPLv2+
PERMIT_PACKAGE_CDROM =	Yes

WANTLIB += 		ICE lib/qt4/QtGui lib/qt4/QtNetwork lib/qt4/QtSql
WANTLIB +=		lib/qt4/QtWebKit SM X11 Xext Xi Xinerama Xrender
WANTLIB += 		c fontconfig freetype m pthread stdc++

MODULES =		x11/qt4

RUN_DEPENDS =		devel/desktop-file-utils \
			x11/gtk+2,-guic

FAKE_FLAGS =		INSTALL_ROOT=${WRKINST}

TEST_FLAGS =		DISPLAY=:0
TEST_IS_INTERACTIVE =	X11

do-configure:
	cd ${WRKDIST} && qmake4 trojita.pro

.include <bsd.port.mk>