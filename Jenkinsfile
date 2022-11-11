pipeline{
    agent any
    stages{
        stage('Clean'){
            bash 'make clean'
        }
        stage('Build'){
            bash 'make code'
        }
    }
}