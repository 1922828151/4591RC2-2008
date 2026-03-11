/*
 * func-name: sub_102706B0
 * func-address: 0x102706b0
 * callers: 0x100031bb
 * callees: 0x1000adc6, 0x1000dafd, 0x10011f3b
 */

void __thiscall sub_102706B0(CTYDialog *this, float a2)
{
  CTYDialog *v2; // ebp
  GameClient::EstabManager *v3; // eax
  struct GameClient::Establishment *Establishment; // eax
  struct GameClient::Establishment *v5; // esi
  int v6; // eax
  int v7; // ebx
  double v8; // st7
  unsigned int v9; // edi
  int v10; // ebp
  int v11; // eax
  int v12; // eax
  double v13; // st6
  int v14; // eax
  int v15; // eax
  double *FunctionByType; // eax
  int v17; // ecx
  double v18; // st7
  double *v19; // eax
  int v20; // ecx
  unsigned int v21; // [esp+8h] [ebp-18h]
  float v22; // [esp+8h] [ebp-18h]
  float v23; // [esp+14h] [ebp-Ch]
  float v24; // [esp+18h] [ebp-8h]
  float v26; // [esp+1Ch] [ebp-4h]
  float v27; // [esp+1Ch] [ebp-4h]

  v2 = this;
  v21 = *((_DWORD *)this + 975);
  v3 = GameClient::EstabManager::Instance();
  Establishment = GameClient::EstabManager::GetEstablishment(v3, v21);
  v5 = Establishment;
  if ( Establishment )
  {
    v6 = *((_DWORD *)Establishment + 39);
    if ( v6 )
      v7 = (*((_DWORD *)v5 + 40) - v6) / 20;
    else
      v7 = 0;
    v8 = 0.0;
    v9 = 0;
    v24 = 0.0;
    v23 = 0.0;
    if ( v7 > 0 )
    {
      v10 = 0;
      do
      {
        v11 = *((_DWORD *)v5 + 39);
        if ( !v11 || v9 >= (*((_DWORD *)v5 + 40) - v11) / 20 )
        {
          _invalid_parameter_noinfo();
          v8 = 0.0;
        }
        v12 = *((_DWORD *)v5 + 39);
        v13 = *(float *)(v12 + v10 + 8);
        v14 = v10 + v12;
        ++v9;
        v10 += 20;
        v23 = v13 + v23;
        v24 = (double)*(int *)(v14 + 4) + v24;
      }
      while ( (int)v9 < v7 );
      v2 = this;
    }
    v15 = *((_DWORD *)v2 + 969);
    *(float *)(v15 + 708) = v24;
    *(float *)(v15 + 712) = v8;
    if ( v8 > v23 )
      v23 = v8;
    (*(void (__stdcall **)(float))(**((_DWORD **)v2 + 969) + 200))(COERCE_FLOAT(LODWORD(v23)));
    FunctionByType = (double *)GameClient::Establishment::GetFunctionByType(5);
    if ( FunctionByType )
    {
      v17 = *((_DWORD *)v2 + 968);
      *(float *)(v17 + 708) = FunctionByType[10] + FunctionByType[8];
      *(float *)(v17 + 712) = 0.0;
      v26 = FunctionByType[6];
      v18 = v26;
LABEL_18:
      v22 = v18;
      (*(void (__stdcall **)(_DWORD))(**((_DWORD **)v2 + 968) + 200))(LODWORD(v22));
      goto LABEL_19;
    }
    v19 = (double *)GameClient::Establishment::GetFunctionByType(7);
    if ( v19 )
    {
      v20 = *((_DWORD *)v2 + 968);
      *(float *)(v20 + 708) = v19[10] + v19[8];
      *(float *)(v20 + 712) = 0.0;
      v27 = v19[6];
      v18 = v27;
      goto LABEL_18;
    }
  }
LABEL_19:
  CTYDialog::Tick(v2, a2);
}
