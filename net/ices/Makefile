# $OpenBSD: Makefile,v 1.28 2013/03/21 08:46:34 ajacoutot Exp $

COMMENT=	icecast source for streaming MP3

DISTNAME=	ices-0.4
REVISION=	9
CATEGORIES=	net audio

HOMEPAGE=	http://www.icecast.org/ices.php

# GPLv2
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB =	c m ogg perl pthread theora util vorbis vorbisfile z
WANTLIB += 	${MODPY_WANTLIB}
WANTLIB += 	mp3lame shout>=3 speex>=4 FLAC>=5 xml2>=7

MASTER_SITES=	http://downloads.xiph.org/releases/ices/

AUTOCONF_VERSION=2.59
CONFIGURE_STYLE=autoconf
CONFIGURE_ARGS=	--with-docdir=${LOCALBASE}/share/doc/ices \
		--with-moddir=${LOCALBASE}/share/ices \
		--with-lame=${LOCALBASE} --with-vorbis=${LOCALBASE} \
		--with-flac=${LOCALBASE}

MODULES=	converters/libiconv
LIB_DEPENDS=	audio/lame \
		net/libshout \
		audio/speex \
		audio/flac \
		textproc/libxml

FLAVORS=	python mp4
FLAVOR?=

.if ${FLAVOR:Mpython}
MODULES+=	lang/python
CONFIGURE_ARGS+=--with-python=${MODPY_BIN}
LIB_DEPENDS+=	${MODPY_LIB_DEPENDS}
.else
CONFIGURE_ARGS+=--without-python
.endif

.if ${FLAVOR:Mmp4}
CONFIGURE_ARGS+=--with-faad=${LOCALBASE}
LIB_DEPENDS+=	audio/faad \
		multimedia/libmp4v2
WANTLIB +=	faad mp4v2
.else
CONFIGURE_ARGS+=--without-faad
.endif

SEPARATE_BUILD=	Yes
USE_GROFF =	Yes

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/ices/
	${INSTALL_DATA} ${WRKINST}/${SYSCONFDIR}/ices.conf.dist \
		${PREFIX}/share/examples/ices/

.include <bsd.port.mk>
