# $OpenBSD: Makefile,v 1.14 2013/10/11 23:48:19 naddy Exp $

COMMENT=	extensions to Class::DBI for MySQL

MODULES=	cpan
DISTNAME=	Class-DBI-mysql-1.00
REVISION=	2
CATEGORIES=	databases

MAINTAINER=	Sam Smith <S@msmith.net>

# Same as Perl
PERMIT_PACKAGE_CDROM=	Yes

RUN_DEPENDS=	databases/p5-Class-DBI \
		databases/p5-DBD-mysql
TEST_DEPENDS=	databases/mysql,-server

TEST_IS_INTERACTIVE=Yes

pre-test:
	@mysqladmin ping >/dev/null 2>&1 || (echo 'MySQL needs to be running'; exit 1)
	-@mysqladmin create test >/dev/null 2>&1

.include <bsd.port.mk>
