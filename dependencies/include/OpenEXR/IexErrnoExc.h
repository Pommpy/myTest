//
// SPDX-License-Identifier: BSD-3-Clause
// Copyright (c) Contributors to the OpenEXR Project.
//

#ifndef INCLUDED_IEXERRNOEXC_H
#define INCLUDED_IEXERRNOEXC_H

//----------------------------------------------------------------
//
//	Exceptions which correspond to "errno" error codes.
//
//----------------------------------------------------------------

#include "IexBaseExc.h"

IEX_INTERNAL_NAMESPACE_HEADER_ENTER

DEFINE_EXC_EXP (IEX_EXPORT, EpermExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnoentExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EsrchExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EintrExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EioExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnxioExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, E2bigExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnoexecExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EbadfExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EchildExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EagainExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnomemExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EaccesExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EfaultExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnotblkExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EbusyExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EexistExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, ExdevExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnodevExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnotdirExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EisdirExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EinvalExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnfileExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EmfileExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnottyExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EtxtbsyExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EfbigExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnospcExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EspipeExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, ErofsExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EmlinkExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EpipeExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EdomExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, ErangeExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnomsgExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EidrmExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EchrngExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, El2nsyncExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, El3hltExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, El3rstExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, ElnrngExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EunatchExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnocsiExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, El2hltExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EdeadlkExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnolckExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EbadeExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EbadrExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, ExfullExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnoanoExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EbadrqcExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EbadsltExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EdeadlockExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EbfontExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnostrExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnodataExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EtimeExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnosrExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnonetExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnopkgExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EremoteExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnolinkExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EadvExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EsrmntExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EcommExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EprotoExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EmultihopExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EbadmsgExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnametoolongExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EoverflowExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnotuniqExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EbadfdExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EremchgExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, ElibaccExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, ElibbadExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, ElibscnExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, ElibmaxExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, ElibexecExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EilseqExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnosysExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EloopExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, ErestartExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EstrpipeExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnotemptyExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EusersExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnotsockExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EdestaddrreqExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EmsgsizeExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EprototypeExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnoprotooptExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EprotonosupportExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EsocktnosupportExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EopnotsuppExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EpfnosupportExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EafnosupportExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EaddrinuseExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EaddrnotavailExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnetdownExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnetunreachExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnetresetExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EconnabortedExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EconnresetExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnobufsExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EisconnExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnotconnExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EshutdownExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EtoomanyrefsExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EtimedoutExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EconnrefusedExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EhostdownExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EhostunreachExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EalreadyExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EinprogressExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EstaleExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EioresidExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EucleanExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnotnamExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnavailExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EisnamExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EremoteioExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EinitExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EremdevExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EcanceledExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnolimfileExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EproclimExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EdisjointExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnologinExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EloginlimExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EgrouploopExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnoattachExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnotsupExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnoattrExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EdircorruptedExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EdquotExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnfsremoteExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EcontrollerExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnotcontrollerExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EenqueuedExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnotenqueuedExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EjoinedExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnotjoinedExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnoprocExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EmustrunExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnotstoppedExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EclockcpuExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EinvalstateExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnoexistExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EendofminorExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EbufsizeExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EemptyExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EnointrgroupExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EinvalmodeExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EcantextentExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EinvaltimeExc, ErrnoExc)
DEFINE_EXC_EXP (IEX_EXPORT, EdestroyedExc, ErrnoExc)

IEX_INTERNAL_NAMESPACE_HEADER_EXIT

#endif
