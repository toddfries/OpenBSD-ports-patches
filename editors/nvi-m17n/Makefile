# $OpenBSD: Makefile,v 1.35 2013/03/11 11:02:50 espie Exp $

COMMENT=	multilingual clone of vi/ex

DISTNAME=	nvi-1.79
PKGNAME=	nvi-m17n-1.79.19991117
REVISION=	6
CATEGORIES=	editors

MASTER_SITES=	ftp://ftp.foretune.co.jp/pub/tools/nvi/
MASTER_SITES0=	ftp://ftp.foretune.co.jp/pub/tools/nvi-m17n/

PATCHFILES=	nvi-1.79.m17n-19991117.diff.gz:0

# License: BSD
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB=		c termlib util

FLAVORS= canna
FLAVOR?=

PATCH_DIST_STRIP=-p1
WRKSRC=	${WRKDIR}/${DISTNAME}/build
AUTOCONF_VERSION=2.13
CONFIGURE_STYLE=autoconf dest
CONFIGURE_ENV=	OPTFLAG='-D_PATH_SYSEXRC=\"${SYSCONFDIR}/vi.exrc\"' 
CONFIGURE_ARGS+=--enable-multibyte --program-prefix=n --host=${ARCH}-unknown-netbsd
USE_GROFF =	Yes

.if ${FLAVOR} == "canna"
WANTLIB+=	canna
LIB_DEPENDS+=	japanese/canna
CONFIGURE_ARGS+=--enable-canna=${LOCALBASE}

CANNA_OPT.euc-jp=canna cannactrl cannakey=
CANNA_OPT.sjis=${CANNA_OPT.euc-jp}
CANNA_OPT.iso-2022-jp=${CANNA_OPT.euc-jp}
.endif

AUTODETECT.euc-jp=jp
AUTODETECT.sjis=jp
AUTODETECT.iso-2022-jp=jp

AUTODETECT.euc-cn=cn
AUTODETECT.big5=cn
AUTODETECT.hz=cn
AUTODETECT.iso-2022-cn=cn

AUTODETECT.euc-tw=tw

AUTODETECT.euc-kr=kr
AUTODETECT.iso-2022-kr=kr

ENCODING+=	iso-2022-cn iso-2022-jp iso-2022-kr
ENCODING+=	euc-jp euc-cn euc-kr sjis big5 euc-tw hz


# nvi provides an outdated version of queue.h, stupid stunt...
post-extract:
	@rm -f ${WRKDIST}/include/sys/queue.h
	@chmod u+w ${WRKSRC}/configure

post-build:
.for encoding in ${ENCODING}
	@sed -e 's|$${CANNA_OPT}|${CANNA_OPT.${encoding}}|'		\
		-e 's|$${AUTODETECT}|${AUTODETECT.${encoding}}|'	\
		-e 's|$${ENCODING}|${encoding}|g'			\
		-e 's|$${PREFIX}|${PREFIX}|'				\
		${FILESDIR}/nvi-m17n > ${WRKDIR}/nvi-${encoding}
.endfor

NO_TEST=	Yes

post-install:
	@mv ${PREFIX}/share/vi/catalog/ru_SU.KOI8-R \
		${PREFIX}/share/vi/catalog/ru_RU.KOI8-R
.for encoding in ${ENCODING}
	@${INSTALL_SCRIPT} ${WRKDIR}/nvi-${encoding} ${PREFIX}/bin
.endfor
	@${INSTALL_DATA} ${WRKDIST}/docs.m17n/README.english \
		${PREFIX}/share/vi/
	@${INSTALL_DATA} ${WRKDIST}/docs.m17n/README.japanese \
		${PREFIX}/share/vi/

.include <bsd.port.mk>
