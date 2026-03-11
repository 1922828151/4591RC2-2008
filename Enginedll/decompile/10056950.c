/*
 * func-name: sub_10056950
 * func-address: 0x10056950
 * callers: 0x1005bd90, 0x1005cb50
 * callees: 0x10116f70, 0x1011fdc0, 0x101218a0
 */

Shader **__stdcall sub_10056950(int a1)
{
  Shader **result; // eax
  Shader *v2; // edx

  result = *(Shader ***)(a1 + 52);
  if ( dword_10284770 != result[38] )
  {
    if ( dword_10284790 )
    {
      if ( dword_10284770 )
      {
        Shader::UnbindHDRTarget(dword_10284770);
        Shader::End(dword_10284770);
        dword_10284774 = -1;
        dword_10284780 = -1;
      }
    }
    result = (Shader **)((char *)Profiler::Get() + 4);
    *result = (Shader *)((char *)*result + 1);
    v2 = *(Shader **)(*(_DWORD *)(a1 + 52) + 152);
    dword_10284774 = -1;
    dword_1028478C = -1;
    dword_10284780 = -1;
    dword_10284790 = 0;
    dword_10284784 = 0;
    dword_1028477C = 0;
    dword_1028476C = 0;
    dword_10284788 = 0;
    dword_10284770 = v2;
  }
  return result;
}
