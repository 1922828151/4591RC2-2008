/*
 * func-name: ??0CMiddleCircleCompare@IONetwork@Outpop@@QAE@G@Z
 * func-address: 0x10009030
 * callers: none
 * callees: none
 */

Outpop::IONetwork::CMiddleCircleCompare *__thiscall Outpop::IONetwork::CMiddleCircleCompare::CMiddleCircleCompare(
        Outpop::IONetwork::CMiddleCircleCompare *this,
        unsigned __int16 a2)
{
  Outpop::IONetwork::CMiddleCircleCompare *result; // eax

  result = this;
  *(_WORD *)this = a2 >> 1;
  return result;
}
