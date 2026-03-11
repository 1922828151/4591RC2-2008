/*
 * func-name: sub_100E0BB0
 * func-address: 0x100e0bb0
 * callers: none
 * callees: 0x1002eb50, 0x10052ae0, 0x100dda20
 */

char __thiscall sub_100E0BB0(int *this, struct Actor *a2)
{
  int *v2; // edi
  int v3; // ecx
  char *v4; // ebp
  int v5; // eax
  int v7; // edi
  char v8; // bl
  int v9; // edi

  v2 = this + 1;
  v3 = this[1];
  if ( *((_DWORD *)a2 + 178) == *(_DWORD *)(v3 + 712) )
  {
    v4 = (char *)a2 + 716;
    if ( *((_DWORD *)a2 + 179) )
    {
      if ( *((_BYTE *)a2 + 1011)
        && (!*((_BYTE *)a2 + 725) || *(_BYTE *)(v3 + 1054))
        && (*((_BYTE *)a2 + 421) && *(_BYTE *)(v3 + 421) || *((_BYTE *)a2 + 422) && *(_BYTE *)(v3 + 422))
        && (!*((_BYTE *)a2 + 332) || !Light::IsExcluded((Light *)v3, a2)) )
      {
        v5 = *v2;
        if ( *(_BYTE *)(*v2 + 1422) )
        {
          if ( *((_BYTE *)a2 + 725) )
          {
            sub_10052AE0((_DWORD *)(*(_DWORD *)v4 + 288), v2);
            return 1;
          }
          if ( *(_BYTE *)(v5 + 1420) && !*((_BYTE *)a2 + 816) )
          {
            std::vector<Model *>::push_back((_DWORD *)(v5 + 1244), (int *)a2 + 179);
            return 1;
          }
        }
        else if ( *(_BYTE *)(v5 + 1421) )
        {
          v8 = *((_BYTE *)a2 + 725) == 0;
          if ( !*((_BYTE *)a2 + 725) || *(_BYTE *)(v5 + 1420) != v8 )
            sub_10052AE0((_DWORD *)(*(_DWORD *)v4 + 288), v2);
          v9 = *v2;
          if ( *(_BYTE *)(v9 + 1420) && v8 && !*((_BYTE *)a2 + 816) )
            std::vector<Model *>::push_back((_DWORD *)(v9 + 1244), (int *)a2 + 179);
        }
        else
        {
          sub_10052AE0((_DWORD *)(*(_DWORD *)v4 + 288), v2);
          v7 = *v2;
          if ( *(_BYTE *)(v7 + 1420) && !*((_BYTE *)a2 + 816) )
          {
            std::vector<Model *>::push_back((_DWORD *)(v7 + 1244), (int *)a2 + 179);
            return 1;
          }
        }
      }
    }
  }
  return 1;
}
