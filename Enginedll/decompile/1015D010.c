/*
 * func-name: ?GetMaterialName@Terrain@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVVector@@@Z
 * func-address: 0x1015d010
 * callers: none
 * callees: 0x101a26c0
 */

int __thiscall Terrain::GetMaterialName(int this, int a2, float *a3)
{
  int result; // eax
  float v4; // [esp+8h] [ebp-Ch]
  float v5; // [esp+8h] [ebp-Ch]
  float v6; // [esp+10h] [ebp-4h]
  float v7; // [esp+10h] [ebp-4h]

  if ( *(_DWORD *)(this + 1588) )
  {
    v4 = *a3 - *(float *)(this + 856);
    v6 = a3[2] - *(float *)(this + 864);
    v5 = v4 / *(float *)(this + 1340) + 0.5;
    v7 = 1.0 - (v6 / *(float *)(this + 1348) + 0.5);
    switch ( *(_BYTE *)((int)((double)*(int *)(*(_DWORD *)(this + 1588) + 80) * v5)
                      + *(_DWORD *)(*(_DWORD *)(this + 1588) + 80)
                      * (int)((double)*(int *)(*(_DWORD *)(this + 1588) + 84) * v7)
                      + *(_DWORD *)(this + 1336)) )
    {
      case 0:
        std::string::string(a2, this + 1592);
        result = a2;
        break;
      case 1:
        std::string::string(a2, this + 1620);
        result = a2;
        break;
      case 0x10:
        std::string::string(a2, this + 1648);
        result = a2;
        break;
      case 0x11:
        std::string::string(a2, this + 1676);
        result = a2;
        break;
      default:
        std::string::string(a2, &unk_101CDB03);
        result = a2;
        break;
    }
  }
  else
  {
    std::string::string(a2, &unk_101CDB02);
    return a2;
  }
  return result;
}
