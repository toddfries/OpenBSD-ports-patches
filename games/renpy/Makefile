# $OpenBSD: Makefile,v 1.7 2014/01/01 06:43:05 bentley Exp $

COMMENT =		visual novel engine

V =			6.16.5
MODPY_EGG_VERSION =	${V}.525
DISTNAME =		renpy-${V}-source
PKGNAME =		${DISTNAME:S/-source//}

CATEGORIES =		games

HOMEPAGE =		http://www.renpy.org/

# mostly MIT, some files LGPLv2.1+
PERMIT_PACKAGE_CDROM =		Yes

WANTLIB +=		GLEW SDL avcodec avformat avresample avutil freetype fribidi
WANTLIB +=		m png pthread swscale z ${MODPY_WANTLIB}

MASTER_SITES =		http://www.renpy.org/dl/${V}/
EXTRACT_SUFX =		.tar.bz2

MODULES =		lang/python
BUILD_DEPENDS =		devel/pygame
RUN_DEPENDS =		devel/pygame \
			x11/gnome/zenity
LIB_DEPENDS =		devel/fribidi \
			graphics/ffmpeg>=20131216p0 \
			graphics/glew

MAKE_ENV =		RENPY_DEPS_INSTALL=/usr::${LOCALBASE}::${X11BASE}

NO_TEST =		Yes

WRKSRC =		${WRKDIST}/module

MODPY_ADJ_FILES =	../renpy.py

pre-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/renpy
	cd ${WRKDIST} && \
	cp -r launcher renpy templates the_question tutorial LICENSE.txt \
		${PREFIX}/share/renpy
	${INSTALL_SCRIPT} ${WRKDIST}/renpy.py ${PREFIX}/share/renpy
	${SUBST_CMD} -o ${BINOWN} -g ${BINGRP} -m ${BINMODE} -c \
		${FILESDIR}/renpy ${PREFIX}/bin/renpy

.include <bsd.port.mk>
