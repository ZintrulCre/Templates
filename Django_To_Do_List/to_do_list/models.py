from django.db import models

# Create your models here.

class ToDo(models.Model):
    title = models.CharField(max_length = 100)
    due = models.CharField(max_length = 10)
    status = models.BooleanField()

    def __str__(self):
        return self.title