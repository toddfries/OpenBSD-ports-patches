# $OpenBSD: Makefile,v 1.6 2013/03/11 10:50:12 espie Exp $

COMMENT =	OCaml Perl-compatible regexp library
CATEGORIES =	devel textproc

V =		7.0.2
REVISION=	0
NAME =		ocaml-pcre
DISTNAME =	pcre-ocaml-$V
PKGNAME =	${NAME}-$V
MASTER_SITES =	https://bitbucket.org/mmottl/pcre-ocaml/downloads/

HOMEPAGE =	https://bitbucket.org/mmottl/pcre-ocaml/


# GPLv2+
PERMIT_PACKAGE_CDROM =		Yes

MODULES =	lang/ocaml

BUILD_DEPENDS =	sysutils/findlib
LIB_DEPENDS =	devel/pcre
WANTLIB =	pcre

CONFIGURE_STYLE =	oasis

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/${NAME}
	@cp -R ${WRKDIST}/examples/* ${PREFIX}/share/examples/${NAME}/
	@chmod -R a-w ${PREFIX}/share/examples/${NAME}/*
	${INSTALL_DATA} ${FILESDIR}/README ${PREFIX}/share/examples/${NAME}/

.include <bsd.port.mk>
