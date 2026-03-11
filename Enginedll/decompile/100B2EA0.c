/*
 * func-name: ?doMotion@CTYDialog@@MAEXM@Z
 * func-address: 0x100b2ea0
 * callers: none
 * callees: 0x1006b730, 0x100a1af0, 0x100a1b10, 0x101a2516, 0x101a26c0
 */

void __thiscall CTYDialog::doMotion(CTYDialog *this, float a2)
{
  int v3; // ebx
  int v4; // ecx
  char v5; // dl
  double v6; // st7
  double v7; // st6
  int v8; // ebx
  int v9; // eax
  double v10; // st6
  double v11; // st7
  double v12; // st6
  unsigned int v13; // eax
  double v14; // st5
  int v15; // edi
  double v16; // st6
  double v17; // st5
  unsigned int v18; // eax
  double v19; // st6
  unsigned int v20; // eax
  double v21; // st7
  double v22; // st6
  double v23; // st5
  double v24; // st7
  double v25; // st5
  unsigned int v26; // eax
  double v27; // st4
  double v28; // st5
  unsigned int v29; // eax
  double v30; // st4
  double v31; // st3
  double v32; // st2
  double v33; // st3
  unsigned int v34; // eax
  double i; // st2
  double v36; // rt1
  double v37; // st4
  double v38; // st7
  int v39; // eax
  signed int v40; // ebp
  int *v41; // edi
  int v42; // eax
  int v43; // ebx
  int v44; // ebp
  int v45; // eax
  int v46; // edi
  int v47; // ecx
  int v48; // [esp+10h] [ebp-18h]
  float v49; // [esp+10h] [ebp-18h]
  int v50; // [esp+10h] [ebp-18h]
  float v51; // [esp+10h] [ebp-18h]
  float v52; // [esp+10h] [ebp-18h]
  int v53; // [esp+14h] [ebp-14h]
  int v54; // [esp+14h] [ebp-14h]
  signed int v55; // [esp+14h] [ebp-14h]
  float v56; // [esp+18h] [ebp-10h]
  int v57; // [esp+18h] [ebp-10h]
  int v58; // [esp+18h] [ebp-10h]
  int v59; // [esp+18h] [ebp-10h]
  float v60; // [esp+1Ch] [ebp-Ch]
  int v61; // [esp+1Ch] [ebp-Ch]
  int v62; // [esp+1Ch] [ebp-Ch]
  int v63; // [esp+1Ch] [ebp-Ch]
  float v64; // [esp+20h] [ebp-8h]
  float v65; // [esp+20h] [ebp-8h]
  float v66; // [esp+20h] [ebp-8h]
  float v67; // [esp+24h] [ebp-4h]
  float v68; // [esp+24h] [ebp-4h]
  float v69; // [esp+2Ch] [ebp+4h]
  float v70; // [esp+2Ch] [ebp+4h]

  v3 = *((_DWORD *)this + 943);
  if ( v3 != 1 )
  {
    v4 = *((_DWORD *)this + 944);
    if ( v4 != 1 )
    {
      v5 = *((_BYTE *)this + 3868);
      v6 = a2;
      v7 = flt_11240B18;
      if ( v5 || *((float *)this + 945) >= v7 + v6 )
      {
        flt_11240B18 = v7 + v6;
        if ( v4 == 2 )
        {
          if ( (v3 & 4) != 0 )
          {
            if ( v5 )
            {
              v8 = *((_DWORD *)this + 949);
              v9 = *((_DWORD *)this + 947);
              v10 = v6 * *((float *)this + 946);
              v11 = 1.0;
              v56 = v10;
              if ( v8 == v9 && *((_DWORD *)this + 950) == *((_DWORD *)this + 948) )
                goto LABEL_11;
              v48 = v8 - v9;
              v12 = (double)(v8 - v9);
              v13 = 2;
              v14 = 1.0;
              while ( 1 )
              {
                if ( (v13 & 1) != 0 )
                  v14 = v14 * v12;
                v13 >>= 1;
                if ( !v13 )
                  break;
                v12 = v12 * v12;
              }
              v15 = *((_DWORD *)this + 950);
              v16 = v14;
              v53 = v15 - *((_DWORD *)this + 948);
              v17 = (double)v53;
              v18 = 2;
              while ( 1 )
              {
                if ( (v18 & 1) != 0 )
                  v11 = v11 * v17;
                v18 >>= 1;
                if ( !v18 )
                  break;
                v17 = v17 * v17;
              }
              v60 = sqrt(v11 + v16);
              v19 = v56;
              v57 = *((_DWORD *)this + 173);
              v20 = 2;
              v49 = (double)v48 * v19 / v60;
              v67 = v19 * (double)v53 / v60;
              v21 = (double)(v57 - v8);
              v22 = 1.0;
              v23 = 1.0;
              while ( 1 )
              {
                if ( (v20 & 1) != 0 )
                  v23 = v23 * v21;
                v20 >>= 1;
                if ( !v20 )
                  break;
                v21 = v21 * v21;
              }
              v24 = v23;
              v61 = *((_DWORD *)this + 174);
              v25 = (double)(v61 - v15);
              v26 = 2;
              v27 = 1.0;
              while ( 1 )
              {
                if ( (v26 & 1) != 0 )
                  v27 = v27 * v25;
                v26 >>= 1;
                if ( !v26 )
                  break;
                v25 = v25 * v25;
              }
              v28 = v27;
              v29 = 2;
              v30 = (double)v57 + v49;
              v31 = v30 - (double)*((int *)this + 949);
              v32 = 1.0;
              while ( 1 )
              {
                if ( (v29 & 1) != 0 )
                  v32 = v32 * v31;
                v29 >>= 1;
                if ( !v29 )
                  break;
                v31 = v31 * v31;
              }
              v33 = v32;
              v34 = 2;
              for ( i = (double)(v61 - v15) + v67; ; i = i * i )
              {
                if ( (v34 & 1) != 0 )
                  v22 = v22 * i;
                v34 >>= 1;
                if ( !v34 )
                  break;
              }
              v36 = v30;
              v37 = v24 + v28;
              v38 = v36;
              if ( v37 < v22 + v33 )
LABEL_11:
                (*(void (__thiscall **)(CTYDialog *, int))(*(_DWORD *)this + 36))(this, 4);
              else
                CTYDialog::SetLocation(this, (int)v38, (int)(v67 + (double)v61));
            }
            else
            {
              v64 = flt_11240B18 / *((float *)this + 945);
              CTYDialog::SetLocation(
                this,
                (int)(v64 * (double)(*((_DWORD *)this + 949) - *((_DWORD *)this + 947)) + (double)*((int *)this + 947)),
                (int)((double)(*((_DWORD *)this + 950) - *((_DWORD *)this + 948)) * v64 + (double)*((int *)this + 948)));
            }
          }
          if ( (*((_BYTE *)this + 3772) & 2) != 0 )
          {
            v58 = *((_DWORD *)this + 953);
            v65 = flt_11240B18 / *((float *)this + 945);
            v54 = *((_DWORD *)this + 954);
            v62 = (int)((double)(v58 - *((_DWORD *)this + 951)) * v65 + (double)*((int *)this + 951));
            v39 = (int)(v65 * (double)(v54 - *((_DWORD *)this + 952)) + (double)*((int *)this + 952));
            *((_DWORD *)this + 175) = v62;
            *((_DWORD *)this + 176) = v39;
            v66 = (double)v62 / (double)v58;
            v68 = (double)v39 / (double)v54;
            v40 = 0;
            v50 = std::vector<AttributeRange>::size((_DWORD *)this + 955);
            v55 = 0;
            if ( v50 > 0 )
            {
              do
              {
                v41 = (int *)std::vector<AttributeRange>::operator[]((_DWORD *)this + 955, v40);
                v42 = *v41;
                if ( *v41 >= 0 && v42 < *((_DWORD *)this + 192) )
                {
                  v43 = *(_DWORD *)(*((_DWORD *)this + 191) + 4 * v42);
                  if ( v43 )
                  {
                    v59 = (int)((double)v41[1] * v66);
                    v63 = (int)((double)v41[2] * v68);
                    v44 = (int)(v66 * (double)v41[3]);
                    v45 = (int)(v68 * (double)v41[4]);
                    v46 = v45;
                    if ( !v44 )
                      v44 = 1;
                    if ( !v45 )
                      v46 = 1;
                    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v43 + 156))(v43, v59, v63);
                    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v43 + 160))(v43, v44, v46);
                    v40 = v55;
                  }
                }
                v55 = ++v40;
              }
              while ( v40 < v50 );
            }
          }
          v47 = *((_DWORD *)this + 943);
          if ( (v47 & 8) != 0 )
          {
            v51 = flt_11240B18 / *((float *)this + 945);
            if ( v51 > 1.0 )
              v51 = 1.0;
            *((float *)this + 23) = *((float *)this + 24) * v51;
          }
          if ( (v47 & 0x10) != 0 )
          {
            v52 = flt_11240B18 / *((float *)this + 945);
            if ( v52 < 0.0 )
              v52 = 0.0;
            *((float *)this + 23) = (1.0 - v52) * *((float *)this + 24);
          }
          if ( (v47 & 0x20) != 0 && *((_BYTE *)this + 3868) )
          {
            v69 = *((float *)this + 946) * a2;
            v70 = v69 + *((float *)this + 23);
            *((float *)this + 23) = v70;
            if ( v70 < 0.0 )
            {
              *((float *)this + 23) = -v70;
              *((float *)this + 946) = -*((float *)this + 946);
            }
            if ( *((float *)this + 24) < (double)*((float *)this + 23) )
            {
              *((float *)this + 23) = *((float *)this + 24) + *((float *)this + 24) - *((float *)this + 23);
              *((float *)this + 946) = -*((float *)this + 946);
            }
          }
        }
      }
      else
      {
        (*(void (__thiscall **)(CTYDialog *, int))(*(_DWORD *)this + 36))(this, 0x7FFFFFFF);
        flt_11240B18 = 0.0;
      }
    }
  }
}
