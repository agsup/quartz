```
void teachClass(Teacher* teacher);
 
void assignJob(Person* person) {
    if (person->name == "Gabriel Foust") {
        // What else could he be but a teacher?
        teachClass((Teacher*)person);
    }
}
```