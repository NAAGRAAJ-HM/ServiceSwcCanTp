#pragma once
/******************************************************************************/
/* File   : EcuabCanTp.hpp                                                         */
/*                                                                            */
/* Author : Nagaraja HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright © 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/NagarajaHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstEcuabCanTp.hpp"
#include "CfgEcuabCanTp.hpp"
#include "EcuabCanTp_core.hpp"
#include "infEcuabCanTp_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_EcuabCanTp:
      INTERFACES_EXPORTED_ECUABCANTP
      public abstract_module
   ,  public class_EcuabCanTp_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstEcuabCanTp_Type* lptrConst = (ConstEcuabCanTp_Type*)NULL_PTR;
      infServicePduRClient_Lo infServicePduRClient_EcuabCanTp;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, ECUABCANTP_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, ECUABCANTP_CONST,       ECUABCANTP_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   ECUABCANTP_CONFIG_DATA, ECUABCANTP_APPL_CONST) lptrCfgModule
      );
      FUNC(void, ECUABCANTP_CODE) DeInitFunction (void);
      FUNC(void, ECUABCANTP_CODE) MainFunction   (void);
      ECUABCANTP_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_EcuabCanTp, ECUABCANTP_VAR) EcuabCanTp;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

