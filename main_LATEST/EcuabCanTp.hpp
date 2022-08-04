#pragma once
/******************************************************************************/
/* File   : EcuabCanTp.hpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
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
      INTERFACES_EXPORTED_CANTP
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
      FUNC(void, CANTP_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, CANTP_CONST,       CANTP_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   CANTP_CONFIG_DATA, CANTP_APPL_CONST) lptrCfgModule
      );
      FUNC(void, CANTP_CODE) DeInitFunction (void);
      FUNC(void, CANTP_CODE) MainFunction   (void);
      CANTP_CORE_FUNCTIONALITIES
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
extern VAR(module_EcuabCanTp, CANTP_VAR) EcuabCanTp;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

