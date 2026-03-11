/*
 * func-name: ?ServiceCtrlHandler@CServiceBase@Utility@Outpop@@QAEKKKPAX@Z
 * func-address: 0x100182f0
 * callers: 0x10018490
 * callees: 0x100182c0
 */

unsigned int __thiscall Outpop::Utility::CServiceBase::ServiceCtrlHandler(
        Outpop::Utility::CServiceBase *this,
        unsigned int a2,
        unsigned int a3,
        void *a4)
{
  unsigned int result; // eax

  switch ( a2 )
  {
    case 1u:
      if ( (*((_BYTE *)this + 16) & 1) == 0 || *((_DWORD *)this + 3) == 32 )
        goto LABEL_22;
      if ( !Outpop::Utility::CServiceBase::SetUltimateState(this, 3u, 0) )
        goto LABEL_24;
      (*(void (__thiscall **)(_DWORD, Outpop::Utility::CServiceBase *))(**((_DWORD **)this + 1) + 32))(
        *((_DWORD *)this + 1),
        this);
      return 0;
    case 2u:
      if ( (*((_BYTE *)this + 16) & 2) == 0 || *((_DWORD *)this + 3) != 4 )
        goto LABEL_22;
      if ( !Outpop::Utility::CServiceBase::SetUltimateState(this, 6u, 0) )
        goto LABEL_24;
      (*(void (__thiscall **)(_DWORD, Outpop::Utility::CServiceBase *))(**((_DWORD **)this + 1) + 12))(
        *((_DWORD *)this + 1),
        this);
      Outpop::Utility::CServiceBase::SetUltimateState(this, 7u, 0);
      return 0;
    case 3u:
      if ( (*((_BYTE *)this + 16) & 2) == 0 || *((_DWORD *)this + 3) != 7 )
        goto LABEL_22;
      if ( !Outpop::Utility::CServiceBase::SetUltimateState(this, 5u, 0) )
        goto LABEL_24;
      (*(void (__thiscall **)(_DWORD, Outpop::Utility::CServiceBase *))(**((_DWORD **)this + 1) + 4))(
        *((_DWORD *)this + 1),
        this);
      Outpop::Utility::CServiceBase::SetUltimateState(this, 4u, 0);
      return 0;
    case 4u:
      if ( SetServiceStatus(*(SERVICE_STATUS_HANDLE *)this, (LPSERVICE_STATUS)((char *)this + 8)) )
        goto LABEL_24;
      goto LABEL_22;
    case 5u:
      if ( (*((_BYTE *)this + 16) & 4) == 0 || *((_DWORD *)this + 3) == 1 )
        goto LABEL_22;
      if ( !Outpop::Utility::CServiceBase::SetUltimateState(this, 3u, 0) )
        goto LABEL_24;
      (*(void (__thiscall **)(_DWORD, Outpop::Utility::CServiceBase *))(**((_DWORD **)this + 1) + 20))(
        *((_DWORD *)this + 1),
        this);
      result = 0;
      break;
    case 0xDu:
      if ( (*((_DWORD *)this + 4) & 0x40) != 0 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD, Outpop::Utility::CServiceBase *, unsigned int))(**((_DWORD **)this + 1) + 16))(
               *((_DWORD *)this + 1),
               this,
               a3) )
        {
LABEL_24:
          result = 0;
        }
        else
        {
          result = 1112363332;
        }
      }
      else
      {
LABEL_22:
        result = 120;
      }
      break;
    default:
      (*(void (__thiscall **)(_DWORD, Outpop::Utility::CServiceBase *, unsigned int))(**((_DWORD **)this + 1) + 8))(
        *((_DWORD *)this + 1),
        this,
        a2);
      goto LABEL_24;
  }
  return result;
}
