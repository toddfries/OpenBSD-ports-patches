# $OpenBSD: Makefile,v 1.30 2014/07/14 08:02:07 ajacoutot Exp $

BROKEN-hppa =	no __sync_bool_compare_and_swap support nor asm fallback

# XXX use the bundled libtool because it needs some specific options we
# don't have.
USE_LIBTOOL=	No

PV=		5.4
V=		${PV}.30
REVISION-main=	0

INI_TEMPLATES=	development production

CONFIGURE_ARGS+=	--enable-mysqlnd

WANTLIB-main+=		stdc++ ncurses readline

# fpm
PKGNAME-fpm?=		php-fpm-${V}
MULTI_PACKAGES+=	-fpm
COMMENT-fpm=		stand-alone FPM version of PHP
CONFIGURE_ARGS+=	--enable-fpm \
			--with-fpm-user=www \
			--with-fpm-group=www
LIB_DEPENDS-fpm=	${LIB_DEPENDS-main}
WANTLIB-fpm=		${WANTLIB-main}
RUN_DEPENDS-fpm=	${RUN_DEPENDS-main} \
			php-${V}:lang/php/${PV}

# pcntl
PKGNAME-pcntl?=		php-pcntl-${V}
MULTI_PACKAGES+=	-pcntl
COMMENT-pcntl=		PCNTL extensions for php5
CONFIGURE_ARGS+=	--enable-pcntl=shared
LIB_DEPENDS-pcntl=
WANTLIB-pcntl=		pthread

# sybase-ct
MULTI_PACKAGES+=	-sybase_ct
COMMENT-sybase_ct=	sybase database access extensions for php5
CONFIGURE_ARGS+=	--with-sybase-ct=shared,${LOCALBASE}
LIB_DEPENDS-sybase_ct=	databases/freetds
WANTLIB-sybase_ct=	ct pthread

.include <bsd.port.mk>
