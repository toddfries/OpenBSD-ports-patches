# $OpenBSD: Makefile,v 1.21 2013/03/11 11:46:08 espie Exp $

COMMENT=	blow holes through windows

DISTNAME=	blast-1.0
CATEGORIES=	x11
DISTFILES=	${DISTNAME}-src-11.00.tar.gz

MASTER_SITES=	http://hpux.connect.org.uk/ftp/hpux/X11/Demos/blast-1.0/

# GPL
PERMIT_PACKAGE_CDROM=	Yes
WANTLIB=		X11 Xext c

USE_GROFF =		Yes

do-build:
	cd ${WRKSRC} && ${CC} blast.c -I${X11BASE}/include ${CFLAGS} -L$(X11BASE)/lib -lX11 -lXext -o blast

NO_TEST=	Yes

do-install:
	$(INSTALL_PROGRAM) $(WRKSRC)/blast $(PREFIX)/bin/blast
	$(INSTALL_MAN) $(WRKSRC)/blast.man $(PREFIX)/man/man1/blast.1

.include <bsd.port.mk>
