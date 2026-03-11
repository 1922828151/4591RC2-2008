/*
 * func-name: ??4CAnalyzeSystem@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x100785b0
 * callers: 0x10010e38
 * callees: 0x1000484a, 0x10010848
 */

int **__thiscall GameClient::CAnalyzeSystem::operator=(int **this, int a2)
{
  _BYTE v4[8]; // [esp+Ch] [ebp-8h] BYREF

  if ( this + 1 != (int **)(a2 + 4) )
  {
    sub_1000484A((int)v4, (int)(this + 1), *this[2], (int)(this + 1), (int)this[2]);
    sub_10010848(a2 + 4);
  }
  return this;
}
