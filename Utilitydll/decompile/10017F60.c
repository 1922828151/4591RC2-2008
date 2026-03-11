/*
 * func-name: ?Initialize@CServiceBase@Utility@Outpop@@QAE_NPAVIServiceHandler@23@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z
 * func-address: 0x10017f60
 * callers: none
 * callees: none
 */

int __thiscall Outpop::Utility::CServiceBase::Initialize(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v6; // ecx
  int result; // eax

  this[1] = a2;
  std::string::operator=(this + 9, a3);
  v6 = a4 != 0 ? 16 : 32;
  result = 1;
  this[2] = v6;
  if ( a5 == 1 )
    this[2] = v6 | 0x100;
  this[3] = 2;
  this[4] = 4;
  this[5] = 0;
  this[6] = 0;
  this[7] = 1;
  this[8] = 2000;
  return result;
}
