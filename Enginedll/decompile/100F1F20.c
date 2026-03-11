/*
 * func-name: sub_100F1F20
 * func-address: 0x100f1f20
 * callers: 0x100f4bf0, 0x100f4c40
 * callees: none
 */

int __stdcall sub_100F1F20(int *a1)
{
  int result; // eax
  int v2; // edx
  int v3; // eax
  char v4[488]; // [esp+10h] [ebp-1E8h] BYREF

  result = (*(int (__stdcall **)(int *, void *, int))(*a1 + 20))(a1, &unk_10281C30, 3278);
  if ( result >= 0 )
  {
    v2 = *a1;
    strcpy(
      v4,
      "template XSkinMeshHeader {\t<3cf169ce-ff7c-44ab-93c0-f78f62d172e2>\tWORD nMaxSkinWeightsPerVertex;\tWORD nMaxSkinW"
      "eightsPerFace;\tWORD nBones;}template VertexDuplicationIndices {\t<b8d65549-d7c9-4995-89cf-53a9a8b031e3>\tDWORD nI"
      "ndices;\tDWORD nOriginalVertices;\tarray DWORD indices[nIndices];}template SkinWeights {\t<6f0d123b-bad2-4167-a0d0"
      "-80224f25fabb>\tSTRING transformNodeName;\tDWORD nWeights;\tarray DWORD vertexIndices[nWeights];\tarray FLOAT weig"
      "hts[nWeights];\tMatrix4x4 matrixOffset;}");
    v3 = (*(int (__stdcall **)(int *, char *, int))(v2 + 20))(a1, v4, 483);
    return v3 >= 0 ? 0 : v3;
  }
  return result;
}
