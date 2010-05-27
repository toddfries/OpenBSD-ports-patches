# $OpenBSD: Makefile.inc,v 1.1.1.1 2010/05/04 12:53:49 ajacoutot Exp $

V=		0.9.26
BASENAME=	backintime-${V}
DISTNAME=	${BASENAME}_src

CATEGORIES+=	sysutils

HOMEPAGE=	http://backintime.le-web.org/

# GPLv2
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

MASTER_SITES=	${HOMEPAGE}download/backintime/

MODULES+=	lang/python

NO_REGRESS=	Yes

WRKDIST= 	${WRKDIR}/${BASENAME}

CONFIGURE_STYLE= simple

MAKE_ENV=	DEST=${WRKINST}${PREFIX}

pre-configure:
.for i in ${SUBST_FILES}
	${SUBST_CMD} ${WRKSRC}/${i}
.endfor
	perl -pi -e 's,/bin/bash,/bin/sh,,;' \
		-e 's,^PREFIX.*,,;' \
		-e 's,^DEST.*,,;' \
		-e 's,--mode=,-m ,g' \
		${WRKSRC}/{configure,Makefile.template}

# clean up the mess
post-install:
	mv ${PREFIX}/share/man/* ${PREFIX}/man
	gunzip ${PREFIX}/man/man[1-9]/*.gz
	rm -rf ${PREFIX}/share/{doc/backintime-*,man}
	rm -f ${PREFIX}/share/doc/backintime/{CHANGES,README,VERSION}
	rm -f ${PREFIX}/share/applications/backintime-gnome-root.desktop