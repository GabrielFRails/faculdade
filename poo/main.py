import pprint as pp

class Turma:
    def __init__(self, professor=None, disciplina=None):
        self._alunos = []
        self._professor = professor
        self._disciplina = disciplina

    def get_resumo_turma(self):
        return {
                "professor": self._professor,
                "disciplina": self._disciplina,
                "alunos": self._alunos
                }

    def add_aluno(self, aluno):
        self._alunos.append(aluno)
    
    def add_alunos(self, alunos):
        self._alunos.extend(alunos)

    def remove_aluno(self, aluno):
        self._alunos.remove(aluno)

    def get_alunos(self):
        return self._alunos

PROFESSOR = "Dirson"
DISCIPLINA = "Programação orientada à objetos"
ALUNO = "Gabriel"
ALUNOS = ["Luiza", "Perarin", "Tallya"]

to = Turma(PROFESSOR, DISCIPLINA)
to.add_aluno(ALUNO)
to.add_alunos(ALUNOS)


resumo_turma = to.get_resumo_turma()
pp.pprint(resumo_turma)
