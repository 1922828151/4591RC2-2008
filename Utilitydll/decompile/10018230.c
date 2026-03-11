/*
 * func-name: ?RunService@CServiceBase@Utility@Outpop@@QAEXKPAPAD@Z
 * func-address: 0x10018230
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Utility::CServiceBase::RunService(
        Outpop::Utility::CServiceBase *this,
        unsigned int a2,
        char **a3)
{
  const CHAR *v4; // eax
  SERVICE_STATUS_HANDLE v5; // eax
  int v6; // ecx
  SERVICE_STATUS_HANDLE v7; // [esp-10h] [ebp-18h]
  SERVICE_STATUS_HANDLE v8; // [esp-10h] [ebp-18h]

  if ( *((_DWORD *)this + 15) < 0x10u )
    v4 = (char *)this + 40;
  else
    v4 = (const CHAR *)*((_DWORD *)this + 10);
  v5 = RegisterServiceCtrlHandlerExA(v4, Outpop::Utility::CServiceBase::ServiceCtrlHandlerDispatch, this);
  *(_DWORD *)this = v5;
  if ( v5 )
  {
    v6 = *((_DWORD *)this + 1);
    *((_DWORD *)this + 8) = 0;
    *((_DWORD *)this + 7) = 0;
    (*(void (__thiscall **)(int, Outpop::Utility::CServiceBase *))(*(_DWORD *)v6 + 36))(v6, this);
    v7 = *(SERVICE_STATUS_HANDLE *)this;
    *((_DWORD *)this + 3) = 4;
    *((_DWORD *)this + 8) = 0;
    if ( SetServiceStatus(v7, (LPSERVICE_STATUS)((char *)this + 8)) )
    {
      (*(void (__thiscall **)(_DWORD, Outpop::Utility::CServiceBase *, unsigned int, char **))(**((_DWORD **)this + 1)
                                                                                             + 28))(
        *((_DWORD *)this + 1),
        this,
        a2,
        a3);
      v8 = *(SERVICE_STATUS_HANDLE *)this;
      *((_DWORD *)this + 3) = 1;
      *((_DWORD *)this + 8) = 0;
      SetServiceStatus(v8, (LPSERVICE_STATUS)((char *)this + 8));
    }
  }
}
