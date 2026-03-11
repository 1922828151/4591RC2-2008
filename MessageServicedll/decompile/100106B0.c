/*
 * func-name: sub_100106B0
 * func-address: 0x100106b0
 * callers: none
 * callees: 0x10011620
 */

void __thiscall sub_100106B0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int *v6; // edi
  _DWORD *v7; // esi
  int *v8; // ebx

  v6 = (int *)this[9];
  v7 = this + 8;
  if ( (unsigned int)v6 > this[10] )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v8 = (int *)v7[2];
    if ( v7[1] > (unsigned int)v8 )
      invalid_parameter_noinfo();
    if ( v6 == v8 )
      break;
    if ( (unsigned int)v6 >= v7[2] )
      invalid_parameter_noinfo();
    Outpop::Message::Channel_Manager::close_channel(*(Outpop::Message::Channel_Manager **)(this[7] + 32), *v6);
    if ( (unsigned int)v6 >= v7[2] )
      invalid_parameter_noinfo();
    ++v6;
  }
}
