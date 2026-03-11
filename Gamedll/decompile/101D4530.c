/*
 * func-name: ??4FSLock@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101d4530
 * callers: 0x1000f812
 * callees: 0x10007ca2
 */

int __thiscall GameClient::FSLock::operator=(int this, int a2)
{
  int result; // eax

  GameClient::FSkill::operator=(a2);
  *(_DWORD *)(this + 700) = *(_DWORD *)(a2 + 700);
  *(_DWORD *)(this + 704) = *(_DWORD *)(a2 + 704);
  *(float *)(this + 708) = *(float *)(a2 + 708);
  result = this;
  *(float *)(this + 712) = *(float *)(a2 + 712);
  return result;
}
