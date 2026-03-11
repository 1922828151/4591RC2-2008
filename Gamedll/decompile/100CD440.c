/*
 * func-name: ?SetTraceLineDefaults@RandomTextureTraceLineEx@@UAEXAAVTraceLine@@@Z_0
 * func-address: 0x100cd440
 * callers: 0x1000fbbe
 * callees: 0x1001a4ec
 */

void __thiscall RandomTextureTraceLineEx::SetTraceLineDefaults(RandomTextureTraceLineEx *this, struct TraceLine *a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  float v7; // [esp+10h] [ebp+4h]
  float v8; // [esp+10h] [ebp+4h]
  float v9; // [esp+10h] [ebp+4h]

  RandomTextureTraceLine::SetTraceLineDefaults(this, a2);
  v4 = rand();
  v7 = (double)v4 / 32767.0 + (double)v4 / 32767.0 - 1.0;
  *((float *)a2 + 12) = v7 * 3.140000104904175;
  if ( *((_BYTE *)this + 416) )
  {
    if ( rand() % 100 <= 49 )
    {
      v6 = rand();
      v9 = (double)v6 / 32767.0 + (double)v6 / 32767.0 - 1.0;
      *((float *)a2 + 13) = *((float *)this + 103) * v9 - *((float *)this + 101);
    }
    else
    {
      v5 = rand();
      v8 = (double)v5 / 32767.0 + (double)v5 / 32767.0 - 1.0;
      *((float *)a2 + 13) = *((float *)this + 103) * v8 + *((float *)this + 101);
    }
  }
  else
  {
    *((float *)a2 + 13) = (double)rand() / 32767.0 * *((float *)this + 103) + *((float *)this + 101);
  }
}
