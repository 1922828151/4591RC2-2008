/*
 * func-name: ?IsNew@CMiddleCircleCompare@IONetwork@Outpop@@QAE_NGG@Z
 * func-address: 0x10009040
 * callers: 0x1003c7d0, 0x1003cc10
 * callees: none
 */

char __thiscall Outpop::IONetwork::CMiddleCircleCompare::IsNew(
        Outpop::IONetwork::CMiddleCircleCompare *this,
        unsigned __int16 a2,
        unsigned __int16 a3)
{
  unsigned __int16 v3; // ax
  unsigned __int16 v5; // cx

  if ( a3 <= a2 )
    v3 = a2 - a3;
  else
    v3 = a3 - a2;
  if ( !v3 )
    return 1;
  v5 = *(_WORD *)this;
  if ( v3 > v5 )
    return a3 < a2;
  if ( v3 >= v5 )
    return 0;
  return a3 > a2;
}
