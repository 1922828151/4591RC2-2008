/*
 * func-name: ?SetTraceLineDefaults@TraceLineSystemEx@@UAEXAAVTraceLine@@@Z_0
 * func-address: 0x100cd350
 * callers: 0x100038b4
 * callees: 0x10014dd0
 */

void __thiscall TraceLineSystemEx::SetTraceLineDefaults(TraceLineSystemEx *this, struct TraceLine *a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  float v7; // [esp+10h] [ebp+4h]
  float v8; // [esp+10h] [ebp+4h]
  float v9; // [esp+10h] [ebp+4h]

  TraceLineSystem::SetTraceLineDefaults(this, a2);
  v4 = rand();
  v7 = (double)v4 / 32767.0 + (double)v4 / 32767.0 - 1.0;
  *((float *)a2 + 12) = v7 * 3.140000104904175;
  if ( *((_BYTE *)this + 364) )
  {
    if ( rand() % 100 <= 49 )
    {
      v6 = rand();
      v9 = (double)v6 / 32767.0 + (double)v6 / 32767.0 - 1.0;
      *((float *)a2 + 13) = *((float *)this + 90) * v9 - *((float *)this + 88);
    }
    else
    {
      v5 = rand();
      v8 = (double)v5 / 32767.0 + (double)v5 / 32767.0 - 1.0;
      *((float *)a2 + 13) = *((float *)this + 90) * v8 + *((float *)this + 88);
    }
  }
  else
  {
    *((float *)a2 + 13) = (double)rand() / 32767.0 * *((float *)this + 90) + *((float *)this + 88);
  }
}
