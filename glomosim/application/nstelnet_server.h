/*
 * GloMoSim is COPYRIGHTED software.  Release 2.02 of GloMoSim is available 
 * at no cost to educational users only.
 *
 * Commercial use of this software requires a separate license.  No cost,
 * evaluation licenses are available for such purposes; please contact
 * info@scalable-networks.com
 *
 * By obtaining copies of this and any other files that comprise GloMoSim2.02,
 * you, the Licensee, agree to abide by the following conditions and
 * understandings with respect to the copyrighted software:
 *
 * 1.Permission to use, copy, and modify this software and its documentation
 *   for education and non-commercial research purposes only is hereby granted
 *   to Licensee, provided that the copyright notice, the original author's
 *   names and unit identification, and this permission notice appear on all
 *   such copies, and that no charge be made for such copies. Any entity
 *   desiring permission to use this software for any commercial or
 *   non-educational research purposes should contact: 
 *
 *   Professor Rajive Bagrodia 
 *   University of California, Los Angeles 
 *   Department of Computer Science 
 *   Box 951596 
 *   3532 Boelter Hall 
 *   Los Angeles, CA 90095-1596 
 *   rajive@cs.ucla.edu
 *
 * 2.NO REPRESENTATIONS ARE MADE ABOUT THE SUITABILITY OF THE SOFTWARE FOR ANY
 *   PURPOSE. IT IS PROVIDED "AS IS" WITHOUT EXPRESS OR IMPLIED WARRANTY.
 *
 * 3.Neither the software developers, the Parallel Computing Lab, UCLA, or any
 *   affiliate of the UC system shall be liable for any damages suffered by
 *   Licensee from the use of this software.
 */

// Use the latest version of Parsec if this line causes a compiler error.
/*
 * $Id: nstelnet_server.h,v 1.2 1999/09/05 04:31:07 jmartin Exp $
 *
 * This file contains data structure used by nstelnet server and 
 * prototypes of functions defined in nstelnet_server.pc.
 */

#ifndef _NSTELNET_SERVER_H_
#define _NSTELNET_SERVER_H_

#include "message.h"

/*
 * NAME:        AppNstelnetServerInit. 
 * PURPOSE:     listen on Nstelnet server port. 
 * PARAMETERS:  nodePtr - pointer to the node, 
 * RETURN:      none. 
 */
void
AppNstelnetServerInit(GlomoNode *, short, NODE_ADDR, short, int, clocktype);

#endif /* _NSTELNET_SERVER_H_ */

