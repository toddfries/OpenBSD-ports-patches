# $OpenBSD: Makefile,v 1.4 2013/03/11 10:50:16 espie Exp $

COMMENT =		displays stack trace in HTML

MODULES =		cpan
DISTNAME =		Devel-StackTrace-AsHTML-0.11
CATEGORIES =		devel
MAINTAINER =		Abel Abraham Camarillo Ojeda <acamari@verlet.org>

# Perl
PERMIT_PACKAGE_CDROM =	Yes

RUN_DEPENDS =		devel/p5-Devel-StackTrace
BUILD_DEPENDS =		${RUN_DEPENDS}

.include <bsd.port.mk>
