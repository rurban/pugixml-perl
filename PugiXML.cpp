/*
 * This file was generated automatically by ExtUtils::ParseXS version 2.2210 from the
 * contents of PugiXML.xs. Do not edit this file, edit PugiXML.xs instead.
 *
 *	ANY CHANGES MADE HERE WILL BE LOST! 
 *
 */

#line 1 "PugiXML.xs"
#include "pugixml.hpp"
#include "typemap.h"

#ifdef __cplusplus
extern "C" {
#endif
#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#ifdef __cplusplus
}
#endif


#include "ppport.h"

using namespace pugi;

#line 30 "PugiXML.c"
#ifndef PERL_UNUSED_VAR
#  define PERL_UNUSED_VAR(var) if (0) var = var
#endif

#ifndef PERL_ARGS_ASSERT_CROAK_XS_USAGE
#define PERL_ARGS_ASSERT_CROAK_XS_USAGE assert(cv); assert(params)

/* prototype to pass -Wmissing-prototypes */
STATIC void
S_croak_xs_usage(pTHX_ const CV *const cv, const char *const params);

STATIC void
S_croak_xs_usage(pTHX_ const CV *const cv, const char *const params)
{
    const GV *const gv = CvGV(cv);

    PERL_ARGS_ASSERT_CROAK_XS_USAGE;

    if (gv) {
        const char *const gvname = GvNAME(gv);
        const HV *const stash = GvSTASH(gv);
        const char *const hvname = stash ? HvNAME(stash) : NULL;

        if (hvname)
            Perl_croak(aTHX_ "Usage: %s::%s(%s)", hvname, gvname, params);
        else
            Perl_croak(aTHX_ "Usage: %s(%s)", gvname, params);
    } else {
        /* Pants. I don't think that it should be possible to get here. */
        Perl_croak(aTHX_ "Usage: CODE(0x%"UVxf")(%s)", PTR2UV(cv), params);
    }
}
#undef  PERL_ARGS_ASSERT_CROAK_XS_USAGE

#ifdef PERL_IMPLICIT_CONTEXT
#define croak_xs_usage(a,b)	S_croak_xs_usage(aTHX_ a,b)
#else
#define croak_xs_usage		S_croak_xs_usage
#endif

#endif

/* NOTE: the prototype of newXSproto() is different in versions of perls,
 * so we define a portable version of newXSproto()
 */
#ifdef newXS_flags
#define newXSproto_portable(name, c_impl, file, proto) newXS_flags(name, c_impl, file, proto, 0)
#else
#define newXSproto_portable(name, c_impl, file, proto) (PL_Sv=(SV*)newXS(name, c_impl, file), sv_setpv(PL_Sv, proto), (CV*)PL_Sv)
#endif /* !defined(newXS_flags) */

#line 82 "PugiXML.c"

XS(XS_PugiXML__Node_new); /* prototype to pass -Wmissing-prototypes */
XS(XS_PugiXML__Node_new)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "CLASS");
    {
	char *	CLASS = (char *)SvPV_nolen(ST(0));
	xml_node *	RETVAL;

	RETVAL = new xml_node();
	ST(0) = sv_newmortal();
    sv_setref_pv( ST(0), PERL_PKG_xml_node, (void*)RETVAL );

    }
    XSRETURN(1);
}


XS(XS_PugiXML__Node_child); /* prototype to pass -Wmissing-prototypes */
XS(XS_PugiXML__Node_child)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "THIS, name");
    {
	xml_node *	THIS;
	xml_node	RETVAL;
	const char *	name = (const char *)SvPV_nolen(ST(1));

    if ( sv_isobject(ST(0)) && (SvTYPE(SvRV(ST(0))) == SVt_PVMG) ) {
        IV tmp = SvIV((SV*)SvRV(ST(0)));
        THIS = INT2PTR(xml_node *, tmp);
    }
    else {
        warn( "PugiXML::Node::child() -- THIS not a blessed SV reference" );
        XSRETURN_UNDEF;
    };

	RETVAL = THIS->child(name);
	ST(0) = sv_newmortal();
    {
        xml_node * tmp = new xml_node();
        *tmp = RETVAL;
        sv_setref_pv( ST(0), PERL_PKG_xml_node, (void*)tmp );
    }

    }
    XSRETURN(1);
}


XS(XS_PugiXML__Node_child_value); /* prototype to pass -Wmissing-prototypes */
XS(XS_PugiXML__Node_child_value)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "THIS");
    {
	xml_node *	THIS;
	const char_t *	RETVAL;
	dXSTARG;

    if ( sv_isobject(ST(0)) && (SvTYPE(SvRV(ST(0))) == SVt_PVMG) ) {
        IV tmp = SvIV((SV*)SvRV(ST(0)));
        THIS = INT2PTR(xml_node *, tmp);
    }
    else {
        warn( "PugiXML::Node::child_value() -- THIS not a blessed SV reference" );
        XSRETURN_UNDEF;
    };

	RETVAL = THIS->child_value();
	sv_setpv(TARG, RETVAL); XSprePUSH; PUSHTARG;
    }
    XSRETURN(1);
}


XS(XS_PugiXML__Node_name); /* prototype to pass -Wmissing-prototypes */
XS(XS_PugiXML__Node_name)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "THIS");
    {
	xml_node *	THIS;
	const char_t *	RETVAL;
	dXSTARG;

    if ( sv_isobject(ST(0)) && (SvTYPE(SvRV(ST(0))) == SVt_PVMG) ) {
        IV tmp = SvIV((SV*)SvRV(ST(0)));
        THIS = INT2PTR(xml_node *, tmp);
    }
    else {
        warn( "PugiXML::Node::name() -- THIS not a blessed SV reference" );
        XSRETURN_UNDEF;
    };

	RETVAL = THIS->name();
	sv_setpv(TARG, RETVAL); XSprePUSH; PUSHTARG;
    }
    XSRETURN(1);
}


XS(XS_PugiXML__Node_value); /* prototype to pass -Wmissing-prototypes */
XS(XS_PugiXML__Node_value)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "THIS");
    {
	xml_node *	THIS;
	const char_t *	RETVAL;
	dXSTARG;

    if ( sv_isobject(ST(0)) && (SvTYPE(SvRV(ST(0))) == SVt_PVMG) ) {
        IV tmp = SvIV((SV*)SvRV(ST(0)));
        THIS = INT2PTR(xml_node *, tmp);
    }
    else {
        warn( "PugiXML::Node::value() -- THIS not a blessed SV reference" );
        XSRETURN_UNDEF;
    };

	RETVAL = THIS->value();
	sv_setpv(TARG, RETVAL); XSprePUSH; PUSHTARG;
    }
    XSRETURN(1);
}


XS(XS_PugiXML__Node_attribute); /* prototype to pass -Wmissing-prototypes */
XS(XS_PugiXML__Node_attribute)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "THIS, name");
    {
	xml_node *	THIS;
	xml_attribute	RETVAL;
	const char *	name = (const char *)SvPV_nolen(ST(1));

    if ( sv_isobject(ST(0)) && (SvTYPE(SvRV(ST(0))) == SVt_PVMG) ) {
        IV tmp = SvIV((SV*)SvRV(ST(0)));
        THIS = INT2PTR(xml_node *, tmp);
    }
    else {
        warn( "PugiXML::Node::attribute() -- THIS not a blessed SV reference" );
        XSRETURN_UNDEF;
    };

	RETVAL = THIS->attribute(name);
        ST(0) = newSVpv(RETVAL.value(), 0);

	sv_2mortal(ST(0));
    }
    XSRETURN(1);
}


XS(XS_PugiXML__Node_select_single_node); /* prototype to pass -Wmissing-prototypes */
XS(XS_PugiXML__Node_select_single_node)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "THIS, xpath");
    {
	xml_node *	THIS;
	xpath_node	RETVAL;
	const char *	xpath = (const char *)SvPV_nolen(ST(1));

    if ( sv_isobject(ST(0)) && (SvTYPE(SvRV(ST(0))) == SVt_PVMG) ) {
        IV tmp = SvIV((SV*)SvRV(ST(0)));
        THIS = INT2PTR(xml_node *, tmp);
    }
    else {
        warn( "PugiXML::Node::select_single_node() -- THIS not a blessed SV reference" );
        XSRETURN_UNDEF;
    };

	RETVAL = THIS->select_single_node(xpath);
	ST(0) = sv_newmortal();
    {
        xpath_node * tmp = new xpath_node();
        *tmp = RETVAL;
        sv_setref_pv( ST(0), PERL_PKG_xpath_node, (void*)tmp );
    }

    }
    XSRETURN(1);
}


XS(XS_PugiXML__Node_select_nodes); /* prototype to pass -Wmissing-prototypes */
XS(XS_PugiXML__Node_select_nodes)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 2)
       croak_xs_usage(cv,  "THIS, xpath");
    {
	xml_node *	THIS;
	xpath_node_set	RETVAL;
	const char *	xpath = (const char *)SvPV_nolen(ST(1));

    if ( sv_isobject(ST(0)) && (SvTYPE(SvRV(ST(0))) == SVt_PVMG) ) {
        IV tmp = SvIV((SV*)SvRV(ST(0)));
        THIS = INT2PTR(xml_node *, tmp);
    }
    else {
        warn( "PugiXML::Node::select_nodes() -- THIS not a blessed SV reference" );
        XSRETURN_UNDEF;
    };

	RETVAL = THIS->select_nodes(xpath);
	ST(0) = sv_newmortal();
    {
        xpath_node_set * tmp = new xpath_node_set();
        *tmp = RETVAL;
        sv_setref_pv( ST(0), PERL_PKG_xpath_node_set, (void*)tmp );
    }

    }
    XSRETURN(1);
}


XS(XS_PugiXML__Document_new); /* prototype to pass -Wmissing-prototypes */
XS(XS_PugiXML__Document_new)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "CLASS");
    {
	char *	CLASS = (char *)SvPV_nolen(ST(0));
	xml_document *	RETVAL;

	RETVAL = new xml_document();
	ST(0) = sv_newmortal();
    sv_setref_pv( ST(0), PERL_PKG_xml_document, (void*)RETVAL );

    }
    XSRETURN(1);
}


XS(XS_PugiXML__Document_DESTROY); /* prototype to pass -Wmissing-prototypes */
XS(XS_PugiXML__Document_DESTROY)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "THIS");
    {
	xml_document *	THIS;

    if ( sv_isobject(ST(0)) && (SvTYPE(SvRV(ST(0))) == SVt_PVMG) ) {
        IV tmp = SvIV((SV*)SvRV(ST(0)));
        THIS = INT2PTR(xml_document *, tmp);
    }
    else {
        warn( "PugiXML::Document::DESTROY() -- THIS not a blessed SV reference" );
        XSRETURN_UNDEF;
    };

	delete THIS;
    }
    XSRETURN_EMPTY;
}


XS(XS_PugiXML__Document_load); /* prototype to pass -Wmissing-prototypes */
XS(XS_PugiXML__Document_load)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items < 2)
       croak_xs_usage(cv,  "THIS, contents, ...");
    {
	xml_document *	THIS;
	xml_parse_result	RETVAL;
	const char *	contents = (const char *)SvPV_nolen(ST(1));

    if ( sv_isobject(ST(0)) && (SvTYPE(SvRV(ST(0))) == SVt_PVMG) ) {
        IV tmp = SvIV((SV*)SvRV(ST(0)));
        THIS = INT2PTR(xml_document *, tmp);
    }
    else {
        warn( "PugiXML::Document::load() -- THIS not a blessed SV reference" );
        XSRETURN_UNDEF;
    };

	RETVAL = THIS->load(contents);
	ST(0) = sv_newmortal();
    {
        xml_parse_result * tmp = new xml_parse_result();
        *tmp = RETVAL;
        sv_setref_pv( ST(0), PERL_PKG_xml_parse_result, (void*)tmp );
    }

    }
    XSRETURN(1);
}


XS(XS_PugiXML__XMLParseResult_description); /* prototype to pass -Wmissing-prototypes */
XS(XS_PugiXML__XMLParseResult_description)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "THIS");
    {
	xml_parse_result *	THIS;
	const char *	RETVAL;
	dXSTARG;

    if ( sv_isobject(ST(0)) && (SvTYPE(SvRV(ST(0))) == SVt_PVMG) ) {
        IV tmp = SvIV((SV*)SvRV(ST(0)));
        THIS = INT2PTR(xml_parse_result *, tmp);
    }
    else {
        warn( "PugiXML::XMLParseResult::description() -- THIS not a blessed SV reference" );
        XSRETURN_UNDEF;
    };

	RETVAL = THIS->description();
	sv_setpv(TARG, RETVAL); XSprePUSH; PUSHTARG;
    }
    XSRETURN(1);
}


XS(XS_PugiXML__XMLParseResult_DESTROY); /* prototype to pass -Wmissing-prototypes */
XS(XS_PugiXML__XMLParseResult_DESTROY)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "THIS");
    {
	xml_parse_result *	THIS;

    if ( sv_isobject(ST(0)) && (SvTYPE(SvRV(ST(0))) == SVt_PVMG) ) {
        IV tmp = SvIV((SV*)SvRV(ST(0)));
        THIS = INT2PTR(xml_parse_result *, tmp);
    }
    else {
        warn( "PugiXML::XMLParseResult::DESTROY() -- THIS not a blessed SV reference" );
        XSRETURN_UNDEF;
    };

	delete THIS;
    }
    XSRETURN_EMPTY;
}


XS(XS_PugiXML__XPathNode_node); /* prototype to pass -Wmissing-prototypes */
XS(XS_PugiXML__XPathNode_node)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "THIS");
    {
	xpath_node *	THIS;
	xml_node	RETVAL;

    if ( sv_isobject(ST(0)) && (SvTYPE(SvRV(ST(0))) == SVt_PVMG) ) {
        IV tmp = SvIV((SV*)SvRV(ST(0)));
        THIS = INT2PTR(xpath_node *, tmp);
    }
    else {
        warn( "PugiXML::XPathNode::node() -- THIS not a blessed SV reference" );
        XSRETURN_UNDEF;
    };

	RETVAL = THIS->node();
	ST(0) = sv_newmortal();
    {
        xml_node * tmp = new xml_node();
        *tmp = RETVAL;
        sv_setref_pv( ST(0), PERL_PKG_xml_node, (void*)tmp );
    }

    }
    XSRETURN(1);
}


XS(XS_PugiXML__XPathNode_parent); /* prototype to pass -Wmissing-prototypes */
XS(XS_PugiXML__XPathNode_parent)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items != 1)
       croak_xs_usage(cv,  "THIS");
    {
	xpath_node *	THIS;
	xml_node	RETVAL;

    if ( sv_isobject(ST(0)) && (SvTYPE(SvRV(ST(0))) == SVt_PVMG) ) {
        IV tmp = SvIV((SV*)SvRV(ST(0)));
        THIS = INT2PTR(xpath_node *, tmp);
    }
    else {
        warn( "PugiXML::XPathNode::parent() -- THIS not a blessed SV reference" );
        XSRETURN_UNDEF;
    };

	RETVAL = THIS->parent();
	ST(0) = sv_newmortal();
    {
        xml_node * tmp = new xml_node();
        *tmp = RETVAL;
        sv_setref_pv( ST(0), PERL_PKG_xml_node, (void*)tmp );
    }

    }
    XSRETURN(1);
}


XS(XS_PugiXML__XPathNodeSet_as_arrayref); /* prototype to pass -Wmissing-prototypes */
XS(XS_PugiXML__XPathNodeSet_as_arrayref)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
    if (items < 1)
       croak_xs_usage(cv,  "THIS, ...");
    {
	xpath_node_set *	THIS;

    if ( sv_isobject(ST(0)) && (SvTYPE(SvRV(ST(0))) == SVt_PVMG) ) {
        IV tmp = SvIV((SV*)SvRV(ST(0)));
        THIS = INT2PTR(xpath_node_set *, tmp);
    }
    else {
        warn( "PugiXML::XPathNodeSet::as_arrayref() -- THIS not a blessed SV reference" );
        XSRETURN_UNDEF;
    };
#line 86 "PugiXML.xs"
        AV *nodes = (AV *)sv_2mortal((SV *)newAV());;

        for (pugi::xpath_node_set::const_iterator it = THIS->begin(); it != THIS->end(); ++it)
        {
            SV * node_sv = newSV(0);
            xpath_node * tmp = new xpath_node();
            *tmp = *it;
            sv_setref_pv( node_sv, PERL_PKG_xml_node, (void*)tmp );
            av_push(nodes, node_sv);
        }

        ST(0)= newRV((SV *)nodes);
        XSRETURN(1);
#line 598 "PugiXML.c"
    }
    XSRETURN(1);
}

#ifdef __cplusplus
extern "C"
#endif
XS(boot_PugiXML); /* prototype to pass -Wmissing-prototypes */
XS(boot_PugiXML)
{
#ifdef dVAR
    dVAR; dXSARGS;
#else
    dXSARGS;
#endif
#if (PERL_REVISION == 5 && PERL_VERSION < 9)
    char* file = __FILE__;
#else
    const char* file = __FILE__;
#endif

    PERL_UNUSED_VAR(cv); /* -W */
    PERL_UNUSED_VAR(items); /* -W */
#ifdef XS_APIVERSION_BOOTCHECK
    XS_APIVERSION_BOOTCHECK;
#endif
    XS_VERSION_BOOTCHECK ;

        newXS("PugiXML::Node::new", XS_PugiXML__Node_new, file);
        newXS("PugiXML::Node::child", XS_PugiXML__Node_child, file);
        newXS("PugiXML::Node::child_value", XS_PugiXML__Node_child_value, file);
        newXS("PugiXML::Node::name", XS_PugiXML__Node_name, file);
        newXS("PugiXML::Node::value", XS_PugiXML__Node_value, file);
        newXS("PugiXML::Node::attribute", XS_PugiXML__Node_attribute, file);
        newXS("PugiXML::Node::select_single_node", XS_PugiXML__Node_select_single_node, file);
        newXS("PugiXML::Node::select_nodes", XS_PugiXML__Node_select_nodes, file);
        newXS("PugiXML::Document::new", XS_PugiXML__Document_new, file);
        newXS("PugiXML::Document::DESTROY", XS_PugiXML__Document_DESTROY, file);
        newXS("PugiXML::Document::load", XS_PugiXML__Document_load, file);
        newXS("PugiXML::XMLParseResult::description", XS_PugiXML__XMLParseResult_description, file);
        newXS("PugiXML::XMLParseResult::DESTROY", XS_PugiXML__XMLParseResult_DESTROY, file);
        newXS("PugiXML::XPathNode::node", XS_PugiXML__XPathNode_node, file);
        newXS("PugiXML::XPathNode::parent", XS_PugiXML__XPathNode_parent, file);
        newXS("PugiXML::XPathNodeSet::as_arrayref", XS_PugiXML__XPathNodeSet_as_arrayref, file);
#if (PERL_REVISION == 5 && PERL_VERSION >= 9)
  if (PL_unitcheckav)
       call_list(PL_scopestack_ix, PL_unitcheckav);
#endif
    XSRETURN_YES;
}

