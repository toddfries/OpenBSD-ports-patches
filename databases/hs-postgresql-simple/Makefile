# $OpenBSD: Makefile,v 1.4 2013/03/11 02:52:05 espie Exp $

COMMENT =		mid-level PostgreSQL client library

DISTNAME =		postgresql-simple-0.2.4.1
REVISION =		1
CATEGORIES =		databases

HOMEPAGE =		https://github.com/lpsmith/postgresql-simple

MAINTAINER =		David Schaefer <dawedawe@gmx.de>

# BSD3
PERMIT_PACKAGE_CDROM =	Yes

MODULES =		lang/ghc

MODGHC_BUILD =		cabal hackage haddock register

BUILD_DEPENDS =		${RUN_DEPENDS}
RUN_DEPENDS =		databases/hs-postgresql-libpq>=0.6.2 \
			devel/hs-blaze-builder \
			devel/hs-blaze-textual \
			devel/hs-text>=0.11.1 \
			devel/hs-transformers \
			devel/hs-vector \
			textproc/hs-attoparsec>=0.8.5.3

.include <bsd.port.mk>