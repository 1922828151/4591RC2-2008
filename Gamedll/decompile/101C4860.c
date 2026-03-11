/*
 * func-name: ?SetEffectBias@Func_Sheild@GameClient@@QAEXMMABVVector@@@Z_0
 * func-address: 0x101c4860
 * callers: 0x1000355d
 * callees: none
 */

void __thiscall GameClient::Func_Sheild::SetEffectBias(
        GameClient::Func_Sheild *this,
        float a2,
        float a3,
        const struct Vector *a4)
{
  *((float *)this + 15) = a2;
  *((float *)this + 16) = a3;
  *((_DWORD *)this + 17) = *(_DWORD *)a4;
  *((_DWORD *)this + 18) = *((_DWORD *)a4 + 1);
  *((_DWORD *)this + 19) = *((_DWORD *)a4 + 2);
}
