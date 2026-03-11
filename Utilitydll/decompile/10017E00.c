/*
 * func-name: ?AddService@CServiceBase@Utility@Outpop@@SAXPAVCServiceHandlerInfor@23@@Z
 * func-address: 0x10017e00
 * callers: 0x10017d60
 * callees: 0x10007360, 0x10018b50, 0x10018e10
 */

void __cdecl Outpop::Utility::CServiceBase::AddService()
{
  _DWORD *v0; // esi

  if ( !Outpop::Utility::CServiceBase::pServiceEntryList )
  {
    v0 = operator new(0xCu);
    if ( v0 )
    {
      v0[1] = sub_10007360();
      v0[2] = 0;
    }
    else
    {
      v0 = 0;
    }
    Outpop::Utility::CServiceBase::pServiceEntryList = (int)v0;
  }
  sub_10018B50();
}
