# $OpenBSD: Makefile,v 1.24 2013/10/11 23:50:10 naddy Exp $

COMMENT=	convert English text to Jive

DISTNAME=	jive-1.1
CATEGORIES=	misc

MASTER_SITES=	ftp://ftp.fr.freebsd.org/pub/FreeBSD/distfiles/ \
		ftp://ftp.freebsd.org/pub/FreeBSD/distfiles/

# License: NONE
PERMIT_PACKAGE_CDROM=	no license
PERMIT_PACKAGE_FTP=	no license
PERMIT_DISTFILES_FTP=	no license

WANTLIB=		c

WRKDIST=	${WRKDIR}/jive

NO_TEST=	Yes

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/jive ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/jive.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
