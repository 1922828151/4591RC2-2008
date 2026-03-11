/*
 * func-name: ?GetBiasLightColor@SkyController@@QAEXAAVVector@@@Z
 * func-address: 0x1012d220
 * callers: 0x1012de10, 0x1012e2b0
 * callees: 0x10056fb0
 */

void __thiscall SkyController::GetBiasLightColor(SkyController *this, struct Vector *a2)
{
  float v2; // eax
  char *v3; // esi
  float *v4; // ecx
  float v5; // ebx
  float v6; // [esp+8h] [ebp-Ch] BYREF
  float v7; // [esp+Ch] [ebp-8h]
  float v8; // [esp+10h] [ebp-4h]

  v6 = 1.0;
  v7 = 1.0;
  v8 = 1.0;
  *(float *)a2 = 1.0;
  v2 = v8;
  v3 = (char *)this + 1292;
  *((float *)a2 + 1) = 1.0;
  *((float *)a2 + 2) = v2;
  v4 = (float *)*((_DWORD *)this + 324);
  v7 = *v4;
  v5 = v7;
  v6 = *(float *)&v3;
  if ( (float *)LODWORD(v7) != v4 )
  {
    if ( LODWORD(v7) == *((_DWORD *)v3 + 1) )
      invalid_parameter_noinfo();
    *(float *)a2 = *(float *)(LODWORD(v7) + 40) * *(float *)a2;
    *((float *)a2 + 1) = *(float *)(LODWORD(v5) + 44) * *((float *)a2 + 1);
    *((float *)a2 + 2) = *(float *)(LODWORD(v5) + 48) * *((float *)a2 + 2);
    sub_10056FB0(&v6);
  }
}
