# $OpenBSD: Makefile,v 1.7 2013/03/11 11:44:44 espie Exp $

COMMENT=		catalyst helper for CRUD scaffolding

MODULES=		cpan
DISTNAME=		Catalyst-Helper-Controller-Scaffold-0.04
REVISION=		0
CATEGORIES=		devel www
USE_GROFF =		Yes

# same as perl
PERMIT_PACKAGE_CDROM=	Yes

RUN_DEPENDS=		databases/p5-Class-DBI-AsForm \
			www/p5-Catalyst-Plugin-FormValidator \
			databases/p5-Class-DBI-FromForm \
			textproc/p5-Template-Plugin-Class \
			textproc/p5-Catalyst-View-TT

MAKE_ENV=		TEST_POD=Yes

.include <bsd.port.mk>
