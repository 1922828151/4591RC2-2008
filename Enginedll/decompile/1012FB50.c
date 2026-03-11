/*
 * func-name: ?AddSkyVolumeBox@SkyController@@SAXAAVBBox@@@Z
 * func-address: 0x1012fb50
 * callers: none
 * callees: 0x10001440, 0x1002b7b0
 */

void __cdecl SkyController::AddSkyVolumeBox(struct BBox *a1)
{
  unsigned int v1; // esi
  int v2; // edi
  _DWORD *v3; // eax
  int v4[13]; // [esp-28h] [ebp-34h] BYREF

  if ( dword_11241A38 )
    v1 = (dword_11241A3C - dword_11241A38) / 40;
  else
    v1 = 0;
  v4[12] = (int)v4;
  sub_10001440((float *)v4);
  std::vector<BBox>::resize(
    &SkyController::InteriorVolumes,
    v1 + 1,
    v4[0],
    v4[1],
    v4[2],
    v4[3],
    v4[4],
    v4[5],
    v4[6],
    v4[7],
    v4[8],
    v4[9]);
  v2 = dword_11241A38;
  if ( !dword_11241A38 || v1 >= (dword_11241A3C - dword_11241A38) / 40 )
  {
    invalid_parameter_noinfo();
    v2 = dword_11241A38;
  }
  v3 = (_DWORD *)(v2 + 40 * v1);
  v3[1] = *((_DWORD *)a1 + 1);
  v3[2] = *((_DWORD *)a1 + 2);
  v3[3] = *((_DWORD *)a1 + 3);
  v3[4] = *((_DWORD *)a1 + 4);
  v3[5] = *((_DWORD *)a1 + 5);
  v3[6] = *((_DWORD *)a1 + 6);
  v3 += 7;
  *v3 = *((_DWORD *)a1 + 7);
  v3[1] = *((_DWORD *)a1 + 8);
  v3[2] = *((_DWORD *)a1 + 9);
}
