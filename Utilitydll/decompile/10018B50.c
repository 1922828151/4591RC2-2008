/*
 * func-name: sub_10018B50
 * func-address: 0x10018b50
 * callers: 0x10017e00
 * callees: 0x10008fb0, 0x10018b90
 */

int __usercall sub_10018B50@<eax>(int a1@<eax>)
{
  _DWORD *v1; // ebx
  int v2; // esi
  int v3; // edi
  int result; // eax

  v1 = (_DWORD *)Outpop::Utility::CServiceBase::pServiceEntryList;
  v2 = *(_DWORD *)(Outpop::Utility::CServiceBase::pServiceEntryList + 4);
  v3 = sub_10018B90(v2, *(_DWORD *)(v2 + 4), a1);
  result = sub_10008FB0(v1);
  *(_DWORD *)(v2 + 4) = v3;
  **(_DWORD **)(v3 + 4) = v3;
  return result;
}
