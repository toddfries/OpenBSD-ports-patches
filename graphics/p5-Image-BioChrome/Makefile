# $OpenBSD: Makefile,v 1.7 2013/03/11 11:10:54 espie Exp $

COMMENT= 	recolor gif images on the fly

MODULES=	cpan 
USE_GROFF =	Yes

DISTNAME=	Image-BioChrome-1.16
REVISION=	0
CATEGORIES=	graphics

# perl
PERMIT_PACKAGE_CDROM=	Yes

RUN_DEPENDS=		misc/p5-File-MMagic
TEST_DEPENDS=	textproc/p5-Template \
			www/mod_perl

.include <bsd.port.mk>
