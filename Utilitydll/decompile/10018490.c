/*
 * func-name: ?ServiceCtrlHandlerDispatch@CServiceBase@Utility@Outpop@@SAKKKPAX0@Z
 * func-address: 0x10018490
 * callers: 0x10018230
 * callees: 0x100182f0
 */

DWORD __stdcall Outpop::Utility::CServiceBase::ServiceCtrlHandlerDispatch(
        DWORD dwControl,
        DWORD dwEventType,
        LPVOID lpEventData,
        Outpop::Utility::CServiceBase *lpContext)
{
  DWORD result; // eax

  result = 120;
  if ( lpContext )
    return Outpop::Utility::CServiceBase::ServiceCtrlHandler(lpContext, dwControl, dwEventType, lpEventData);
  return result;
}
