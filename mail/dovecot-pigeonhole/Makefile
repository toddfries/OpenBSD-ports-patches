# $OpenBSD: Makefile,v 1.34 2013/12/22 22:23:56 brad Exp $

SHARED_ONLY=	Yes

COMMENT=	Sieve mail filtering for Dovecot

V_SIEVE=	0.4.2
V_DOVECOT=	2.2
V_DOVECOT_FULL=	2.2.10

DISTNAME=	dovecot-${V_DOVECOT}-pigeonhole-${V_SIEVE}
PKGNAME=	dovecot-pigeonhole-${V_SIEVE}
REVISION=	2
EPOCH=		0
CATEGORIES=	mail
MASTER_SITES=	http://www.rename-it.nl/dovecot/${V_DOVECOT}/

SHARED_LIBS=	dovecot-sieve	2.0

HOMEPAGE=	http://pigeonhole.dovecot.org/

MAINTAINER=	Brad Smith <brad@comstyle.com>

# LGPLv2.1
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB=	lib/dovecot/dovecot lib/dovecot/dovecot-lda \
		lib/dovecot/dovecot-login lib/dovecot/dovecot-storage \
		c crypto ssl ${MODLIBICONV_WANTLIB}

MODULES=	converters/libiconv
LIB_DEPENDS=	mail/dovecot=${V_DOVECOT_FULL}

CONFIGURE_STYLE= gnu
CONFIGURE_ARGS=	--docdir=${PREFIX}/share/doc
CONFIGURE_ENV=	CPPFLAGS="-I${LOCALBASE}/include" \
		LDFLAGS="-L${LOCALBASE}/lib"

post-install:
	@find ${PREFIX}/lib/dovecot -name '*.a' -print | xargs rm
	@find ${PREFIX}/lib/dovecot -name '*.la' -print | xargs rm

.include <bsd.port.mk>
